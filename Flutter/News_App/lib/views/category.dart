import 'package:flutter/material.dart';

import '../helper/news.dart';
import '../models/article_model.dart';
import 'home.dart';

class Category extends StatefulWidget {
  final String category;
  Category({required this.category});

  @override
  State<Category> createState() => _CategoryState();
}

class _CategoryState extends State<Category> {
  List<ArticleModel> articles = <ArticleModel>[];
  bool _loading = true;
  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    getCategoryNews();
  }

  void getCategoryNews() async {
    CategoryNews news = CategoryNews();
    await news.getNews(widget.category);
    articles = news.news;
    setState(() {
      _loading = false;
    });
  }
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
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
          body:SingleChildScrollView(
    child: _loading ? Center(
    child: CircularProgressIndicator()
    ) : Container(
            child: Column(
              children: [
                Container(
                  padding: EdgeInsets.only(top: 16),
                  child: ListView.builder(itemCount: articles.length,physics: ClampingScrollPhysics(),shrinkWrap: true,itemBuilder: (context,index){
                    return BlogTile(imageurl: articles[index].urlToImage, title: articles[index].title, desc: articles[index].description, url: articles[index].url,);
                  }),
                ),
              ],
            ),
          ),
      ),
      ),
    );
  }
}
