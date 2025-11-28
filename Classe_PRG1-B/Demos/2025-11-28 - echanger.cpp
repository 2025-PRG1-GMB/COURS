#ifndef ECHANGER_IMPL_H
#define ECHANGER_IMPL_H

template <typename T>
void echanger(T& LHS, T& RHS) {
   T temp = LHS;
   LHS = RHS;
   RHS = temp;
}

#endif
