Function ftot(x)
  Common /hparnt/hipr1(100), ihpr2(50), hint1(100), ihnt2(50)
  Save
  omg = omg0(x)*(hipr1(30)+hint1(11))/hipr1(31)/2.0
  ftot = 2.0*(1.0-exp(-omg))
  Return
End Function ftot
