// 函数: sub_69eb1a
// 地址: 0x69eb1a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

long double result = fconvert.t(arg2)
long double x87_r6 = float.t(0)
x87_r6 - result
int32_t eax
eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
    | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}
int32_t edi

if (p)
    int32_t __saved_esi_1 = arg1
    arg1.w = arg2:6.w
    int32_t ecx
    int32_t edx_1
    
    if ((zx.d(arg1.w) & 0x7ff0) == 0)
        ecx = arg2:4.d
        edx_1 = arg2.d
    
    if ((zx.d(arg1.w) & 0x7ff0) == 0 && ((ecx & 0xfffff) != 0 || edx_1 != 0))
        x87_r6 - result
        edi = 0xfffffc03
        uint32_t eax_1
        eax_1.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
            | (x87_r6 == result ? 1 : 0) << 0xe
        int32_t eax_2
        
        if ((eax_1:1.b & 0x41) != 0)
            eax_2 = 0
        else
            eax_2 = 1
        
        if ((arg2:6.b & 0x10) == 0)
            do
                ecx *= 2
                arg2:4.d = ecx
                
                if (edx_1 s< 0)
                    ecx |= 1
                    arg2:4.d = ecx
                
                edx_1 *= 2
                edi -= 1
            while ((arg2:6.b & 0x10) == 0)
            
            arg1.w = arg2:6.w
            arg2.d = edx_1
        
        arg1.w &= 0xffef
        arg2:6.w = arg1.w
        
        if (eax_2 != 0)
            arg1.w |= 0x8000
            arg2:6.w = arg1.w
        
        int32_t var_14_1 = 0xffef
        result = sub_69ebec(9.18116741e-41f, 0, __saved_esi_1)
    else
        int32_t var_14_2 = ecx
        int32_t var_18_1 = ecx
        var_18_1.q = fconvert.d(x87_r6)
        result = sub_69ebec(var_18_1, 0, __saved_esi_1)
        edi = (zx.d(arg1.w) u>> 4 & 0x7ff) - 0x3fe
else
    edi = 0

*arg3 = edi
return result
