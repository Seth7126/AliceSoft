// 函数: sub_42b270
// 地址: 0x42b270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
sub_42ccf0(edi + 0x38, edi + 0x2c)
int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 4) = 0

struct 
    common::SuicideRefCounter<class advengine::ILineSyntax>::advengine::CFunctionCallSyntax::VTable*
    * eax_2 = sub_6e810c(0x34)
arg2 = eax_2
eax_2[1] = 1
*eax_2 = &advengine::CFunctionCallSyntax::`vftable'{for `common::SuicideRefCounter<class advengine::ILineSyntax>'}
__builtin_memset(&eax_2[2], 0, 0x2c)

if (sub_426510(eax_2, edi, arg3, arg4) != 0)
    *(arg1 + 4) = eax_2
    *(edi + 0x3c) -= 4
    return 1

(*eax_2)->vFunc_9(1)
int32_t result = *(edi + 0x38)

if (result != *(edi + 0x3c))
    *(edi + 0x2c) = *(result + ((*(edi + 0x3c) - result) s>> 2 << 2) - 4)
    *(edi + 0x3c) -= 4

result.b = 0
return result
