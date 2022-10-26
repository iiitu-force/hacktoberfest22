import 'package:flutter/material.dart';
import 'package:newsapp/helper/data.dart';
import 'package:newsapp/views/article.dart';
import '../helper/news.dart';
import '../models/article_model.dart';
import '../models/category_model.dart';
import 'category.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  List<CategoryModel> categories = <CategoryModel>[];
  List<ArticleModel> articles = <ArticleModel>[];
  bool _loading = true;
  void getNews() async {
    News news = News();
    await news.getNews();
    articles = news.news;
    setState(() {
      _loading = false;
    });
  }

  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    _loading = true;
    categories = getCategories().cast<CategoryModel>();
    getNews();
  }

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
        elevation: 0.0,
        backgroundColor: Colors.transparent,
      ),
      body: SingleChildScrollView(
         child: _loading ? Center(
            child: CircularProgressIndicator()
      ) :
          Container(
            padding: EdgeInsets.symmetric(horizontal: 16),
            child: Column(
              children: [
                SingleChildScrollView(
                  child: Container(
                    height: 70,
                    child: ListView.builder(itemCount: categories.length,shrinkWrap: true,scrollDirection: Axis.horizontal,itemBuilder: (context,index){
                     return CategoryTile(
                       imageurl: categories[index].imageurl,
                       categoryName: categories[index].categoryName,
                     );
                    }),
                  ),
                ),
                Container(
                  padding: EdgeInsets.only(top: 16),
                  child: ListView.builder(itemCount: articles.length,physics: ClampingScrollPhysics(),shrinkWrap: true,itemBuilder: (context,index){
                    return BlogTile(imageurl: articles[index].urlToImage, title: articles[index].title, desc: articles[index].description, url: articles[index].url,);
                  }),
                )
              ],
            ),
          ),
        ),
      );
  }
}

class CategoryTile extends StatelessWidget {
  final String imageurl, categoryName ;
  CategoryTile({required this.imageurl,required this.categoryName});
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: (){
        Navigator.push(context, MaterialPageRoute(builder: (context)=> Category(category: categoryName.toUpperCase(),)));
      },
      child: Container(
        margin: EdgeInsets.only(right: 16),
        child: Stack(
          children: [
            ClipRRect(borderRadius: BorderRadius.circular(6),
                child: Image.network(imageurl,width: 120,height: 60,fit: BoxFit.cover,)),
            Container(
              alignment: Alignment.center,
            width: 120,height: 60,
              decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(6),
                color: Colors.black26,
              ),
              child: Text(categoryName,style: TextStyle(
                color: Colors.white,
                fontWeight: FontWeight.w500,
                fontSize: 14,
              ),),
            )
          ],
        ),
      ),
    );
  }
}

class BlogTile extends StatelessWidget {
  final String imageurl,title,desc,url;
  BlogTile({required this.imageurl,required this.title,required this.desc,required this.url});
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: (){
        Navigator.push(context, MaterialPageRoute(builder: (context)=>Article(url)));
      },
      child: Container(
        child: Column(
          children: [
            ClipRRect(
                borderRadius: BorderRadius.circular(6),
                child: Image.network(imageurl)),
            SizedBox(height: 8,),
            Text(title,style: TextStyle(
              fontSize: 18,
              fontWeight: FontWeight.w500,
              color: Colors.black87
            ),),
            SizedBox(height: 8,),
            Text(desc,style: TextStyle(
              color: Colors.black54,
            ),),
            SizedBox(height: 10,),
          ],
        ),
      ),
    );
  }
}
