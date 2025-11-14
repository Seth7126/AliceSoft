// 函数: __set_statfp
// 地址: 0x69f55f
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
char ecx_1 = arg2
int16_t top
bool c1

if ((ecx_1 & 1) != 0)
    data_74a538
    arg2 = (int.d(arg1)).b
    top = 1
    c1 = unimplemented  {fistp dword [ebp+0x8], st0}

if ((ecx_1 & 8) != 0)
    int32_t eax
    bool c0
    bool c2
    bool c3
    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb
    unimplemented  {fld st0, tword [0x74a538]}
    int64_t temp1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
    unimplemented  {fstp qword [ebp-0x8], st0}
    var_c.q = fconvert.d(temp1_1)
    bool c1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
    eax.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        | (top & 7) << 0xb

if ((ecx_1 & 0x10) != 0)
    unimplemented  {fld st0, tword [0x74a544]}
    var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
    unimplemented  {fstp qword [ebp-0x8], st0}

if ((ecx_1 & 4) != 0)
    unimplemented  {fldz }
    unimplemented  {fld1 }
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fdivrp st1, st0}
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}

if ((ecx_1 & 0x20) == 0)
    return 

unimplemented  {fldpi }
var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
unimplemented  {fstp qword [ebp-0x8], st0}
