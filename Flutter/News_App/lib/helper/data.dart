import '../models/category_model.dart';

List<CategoryModel> getCategories(){
     List<CategoryModel> category = <CategoryModel>[];
     CategoryModel categoryModel = new CategoryModel();

     categoryModel.categoryName = "Business";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1516321318423-f06f85e504b3?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "Entertainment";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1603190287605-e6ade32fa852?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "General";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1495020689067-958852a7765e?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=800&q=60";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "Health";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1505751172876-fa1923c5c528?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "Science";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1493612276216-ee3925520721?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=464&q=80";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "Sports";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1540747913346-19e32dc3e97e?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1005&q=80";
     category.add(categoryModel);

     categoryModel = new CategoryModel();
     categoryModel.categoryName = "Technology";
     categoryModel.imageurl = "https://images.unsplash.com/photo-1580894742597-87bc8789db3d?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80";

     return category;
}