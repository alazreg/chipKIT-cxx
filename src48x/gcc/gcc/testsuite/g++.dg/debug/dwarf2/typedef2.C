// Origin: PR debug/43628
// { dg-options "-g -dA" }
// { dg-do compile }

// { dg-final { scan-assembler-times "\[^\n\r\]*\\(DIE\[^\n\r\]*DW_TAG_formal_parameter\\)\[\n\r\]{1,2}\[^\n\r\]*DW_AT_type\[\n\r\]{1,2}" 1 } }
class C
{
  public:
  typedef void (*t) (C);
};
C::t f;
