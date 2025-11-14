// 函数: sub_52b030
// 地址: 0x52b030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_52b110(arg1)
int32_t* eax
int32_t ecx_1
int32_t edx
eax, ecx_1, edx = sub_58d270(arg1 + 0xc, arg7, arg4, arg5, arg3, 0, 0, arg7)

if (eax.b != 0)
    int32_t* eax_2
    int32_t ecx_3
    int32_t edx_1
    eax_2, ecx_3, edx_1 = sub_58d270(arg1 + 0x28, arg7, arg4, arg5, arg3, 0, 0, arg7)
    
    if (eax_2.b == 0)
        sub_59f4e0(eax_2, edx_1, ecx_3, "CBlurBuffer::Create()\n", arg2)
        enum MESSAGEBOX_RESULT eax_3
        eax_3.b = 0
        return eax_3
    
    char xmm0_2 = _mm_cvtepi32_ps(zx.o(arg5))
    int32_t var_14_2 = 0x3f800000
    int32_t var_18_1 = 0x3f800000
    
    if (sub_59b800(arg1 + 0x44, (zx.o(0)).d, (zx.o(0)).d, arg7, _mm_cvtepi32_ps(zx.o(arg4)), 
            xmm0_2, 1) != 0)
        *(arg1 + 4) = arg8
        *(arg1 + 5) = arg9
        *(arg1 + 8) = arg6
        int32_t eax_4
        eax_4.b = 1
        return eax_4
else
    sub_59f4e0(eax, edx, ecx_1, "CBlurBuffer::Create()\n", arg2)

return 0
