// 函数: sub_58a5f0
// 地址: 0x58a5f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_58a690(arg1)
*(arg1 + 8) = arg4
(**arg4)()
int32_t* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    char eax_4 = (*(*ecx_1 + 0x8c))()
    int32_t* ecx_2 = *(arg1 + 8)
    *(arg1 + 0x12b) = eax_4
    *(arg1 + 0x12c) = (*(*ecx_2 + 0x90))()
    sub_58a890(arg1)
    struct sealengine::CShader::VTable** eax_8
    int32_t ecx_5
    int32_t edx_1
    eax_8, ecx_5, edx_1 = sub_58c6b0(arg1 + 0xc, *(arg1 + 8), *(arg1 + 0x510))
    
    if (eax_8.b != 0)
        *(arg1 + 0x148) = *(arg1 + 0x510)
        int32_t eax_10 = *(arg1 + 0x514)
        *(arg1 + 0x14c) = eax_10
        *(arg1 + 0x4f4) = eax_10
        *(arg1 + 4) = arg3
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    sub_59f4e0(eax_8, edx_1, ecx_5, 0x6e5a70, arg2)

enum MESSAGEBOX_RESULT eax_1
eax_1.b = 0
return eax_1
