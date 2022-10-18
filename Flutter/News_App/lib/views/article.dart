import 'dart:async';
import 'dart:io';
import 'package:flutter/material.dart';
import 'package:webview_flutter/webview_flutter.dart';

class Article extends StatefulWidget {
  String url="";
  Article(this.url);
  @override
  State<Article> createState() => _ArticleState();
}

class _ArticleState extends State<Article> {
  late  String finalUrl;
  final Completer<WebViewController> controller = Completer<WebViewController>();
  @override
  void initState() {
    if(widget.url.toString().contains("http://"))
    {
      finalUrl = widget.url.toString().replaceAll("http://", "https://");
    }
    else{
      finalUrl = widget.url;
    }
    super.initState();
  }
  final Completer<WebViewController> _completer = Completer<WebViewController>();
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              "Todays ",
              style:
              TextStyle(color: Colors.black87,fontSize: 20 ,fontWeight: FontWeight.w600),
            ),
            Text(
              "News",
              style: TextStyle(color: Colors.blue, fontSize: 20,fontWeight: FontWeight.w600),
            )
          ],
        ),
        actions: [Opacity(opacity: 1, child: Container(
          padding: EdgeInsets.symmetric(horizontal: 16),
          child: InkWell(child: Icon(Icons.arrow_back_ios, color: Colors.black,), onTap: (){
            Navigator.pop(context);
          },),
        ),),],
        elevation: 0.0,
        backgroundColor: Colors.transparent,
      ),
      body: Container(
        child: WebView(
          initialUrl: finalUrl,
          javascriptMode: JavascriptMode.unrestricted,
          onWebViewCreated: (WebViewController webViewController){
            setState(() {
              controller.complete(webViewController);
            });
          },
        ),
      ),
    );
  }
}
