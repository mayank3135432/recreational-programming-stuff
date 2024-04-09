
struct list{
  void** item;
  int size_alloc;
  int size;

  void lesserspace();
  void morespace();

  void __init__();

  template <typename T>
  void append(T* data);
  template <typename T>
  void insert_at(T* data, int index);

  template <typename T>
  T* pop();
  template <typename T>
  T* remove_at(int index);

  // void print();
};
