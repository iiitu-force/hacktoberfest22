import 'dart:convert';
import '../models/article_model.dart';
import 'package:http/http.dart' as http;

class News{
  List<ArticleModel> news = [];

  Future<void> getNews() async{
    String url = "https://newsapi.org/v2/top-headlines?country=in&apiKey=367689a34b5e4968b3f6b7ab6b3a582a";
    // String url1 = "";
    var response = await http.get(Uri.parse(url));
    var jsonData = jsonDecode(response.body);
      try{
      jsonData["articles"].forEach((element){
        if(element['urlToImage'] != null && element['description'] != null && element['content'] !=null){
          ArticleModel article = ArticleModel(
            title: element['title'],
            // author: element['author'],
            description: element['description'],
            urlToImage: element['urlToImage'],
            Content: element["content"],
            url: element["url"],
          );
            news.add(article);
        }
      });
    }catch(e){print(e);}
  }
}

class CategoryNews{
  List<ArticleModel> news = [];

  Future<void> getNews(String category) async{
    String url = "https://newsapi.org/v2/top-headlines?category=$category&country=in&apiKey=367689a34b5e4968b3f6b7ab6b3a582a";
    // String url1 = "";
    var response = await http.get(Uri.parse(url));
    var jsonData = jsonDecode(response.body);
    try{
      jsonData["articles"].forEach((element){
        if(element['urlToImage'] != null && element['description'] != null && element['content'] !=null){
          ArticleModel article = ArticleModel(
            title: element['title'],
            // author: element['author'],
            description: element['description'],
            urlToImage: element['urlToImage'],
            Content: element["content"],
            url: element["url"],
          );
          news.add(article);
        }
      });
    }catch(e){print(e);}
  }
}
