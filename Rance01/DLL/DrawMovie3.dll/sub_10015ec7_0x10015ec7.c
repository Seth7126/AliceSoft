// 函数: sub_10015ec7
// 地址: 0x10015ec7
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
ecx.b = arg2
int16_t top
bool c1

if ((ecx.b & 1) != 0)
    data_1002141c
    arg2.d = int.d(arg1)
    top = 1
    c1 = unimplemented  {fistp dword [ebp+0x8], st0}

if ((ecx.b & 8) != 0)
    int32_t eax
    bool c0
    bool c2
    bool c3
    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb
    unimplemented  {fld st0, tword [0x1002141c]}
    int64_t temp1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
    unimplemented  {fstp qword [ebp-0x8], st0}
    var_c.q = fconvert.d(temp1_1)
    bool c1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
    eax.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb

if ((ecx.b & 0x10) != 0)
    unimplemented  {fld st0, tword [0x10021428]}
    var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
    unimplemented  {fstp qword [ebp-0x8], st0}

if ((ecx.b & 4) != 0)
    unimplemented  {fldz }
    unimplemented  {fld1 }
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}

if ((ecx.b & 0x20) == 0)
    return 

unimplemented  {fldpi }
var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
unimplemented  {fstp qword [ebp-0x8], st0}
