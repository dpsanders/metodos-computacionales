class Matrix {
 public:
   Matrix(unsigned rows, unsigned cols);
   double& operator() (unsigned row, unsigned col);        ← subscript operators often come in pairs
   double  operator() (unsigned row, unsigned col) const;  ← subscript operators often come in pairs
   ...
  ~Matrix();                              // Destructor
   Matrix(const Matrix& m);               // Copy constructor
   Matrix& operator= (const Matrix& m);   // Assignment operator
   ...
 private:
   unsigned rows_, cols_;
   double* data_;
 };
 
 inline
 Matrix::Matrix(unsigned rows, unsigned cols)
   : rows_ (rows)
   , cols_ (cols)
   //data_ <--initialized below (after the 'if/throw' statement)
 {
   if (rows == 0 || cols == 0)
     throw BadIndex("Matrix constructor has 0 size");
   data_ = new double[rows * cols];
 }
 
 inline
 Matrix::~Matrix()
 {
   delete[] data_;
 }
 
 inline
 double& Matrix::operator() (unsigned row, unsigned col)
 {
   if (row >= rows_ || col >= cols_)
     throw BadIndex("Matrix subscript out of bounds");
   return data_[cols_*row + col];
 }
 
 inline
 double Matrix::operator() (unsigned row, unsigned col) const
 {
   if (row >= rows_ || col >= cols_)
     throw BadIndex("const Matrix subscript out of bounds");
   return data_[cols_*row + col];
 } 
 int main()
 {
   Matrix m(10,10);
   m(5,8) = 106.15;
   std::cout << m(5,8);
   ...
 } 
