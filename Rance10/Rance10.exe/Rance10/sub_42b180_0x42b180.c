// 函数: sub_42b180
// 地址: 0x42b180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class advengine::ILineSyntax>::advengine::CIFSyntax::VTable** 
    edi = arg2
sub_42ccf0(&edi[0xe], &edi[0xb])
int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 4) = 0

struct common::SuicideRefCounter<class advengine::ILineSyntax>::advengine::CIFSyntax::VTable** 
    eax_2 = sub_6e810c(0x3c)
arg2 = eax_2
eax_2[1] = 1
*eax_2 =
    &advengine::CIFSyntax::`vftable'{for `common::SuicideRefCounter<class advengine::ILineSyntax>'}
__builtin_memset(&eax_2[2], 0, 0x31)

if (sub_42a4f0(eax_2, edi, arg3, arg4) != 0)
    *(arg1 + 4) = eax_2
    edi[0xf] -= 4
    return 1

(*eax_2)->vFunc_9(1)
int32_t result = edi[0xe]

if (result != edi[0xf])
    edi[0xb] = *(result + ((edi[0xf] - result) s>> 2 << 2) - 4)
    edi[0xf] -= 4

result.b = 0
return result
