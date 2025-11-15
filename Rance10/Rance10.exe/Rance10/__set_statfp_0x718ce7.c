// 函数: __set_statfp
// 地址: 0x718ce7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t top
bool c1

if ((arg2 & 1) != 0)
    data_756710
    int32_t var_8_1 = int.d(arg1)
    top = 1
    c1 = unimplemented  {fistp dword [ebp-0x4], st0}

if ((arg2 & 8) != 0)
    int32_t eax
    bool c0
    bool c2
    bool c3
    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb
    unimplemented  {fld st0, tword [0x756710]}
    double temp1_1 = unimplemented  {fstp qword [ebp-0xc], st0}
    unimplemented  {fstp qword [ebp-0xc], st0}
    double var_10_1 = fconvert.d(temp1_1)
    bool c1_1 = unimplemented  {fstp qword [ebp-0xc], st0}
    eax.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb

if ((arg2 & 0x10) != 0)
    unimplemented  {fld st0, tword [0x75671c]}
    double var_10_2 = fconvert.d(unimplemented  {fstp qword [ebp-0xc], st0})
    unimplemented  {fstp qword [ebp-0xc], st0}

if ((arg2 & 4) != 0)
    unimplemented  {fldz }
    unimplemented  {fld1 }
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}

if ((arg2 & 0x20) == 0)
    return 

unimplemented  {fldpi }
double var_10_3 = fconvert.d(unimplemented  {fstp qword [ebp-0xc], st0})
unimplemented  {fstp qword [ebp-0xc], st0}
