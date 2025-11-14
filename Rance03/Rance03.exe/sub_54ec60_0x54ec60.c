// 函数: sub_54ec60
// 地址: 0x54ec60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = nullptr
int32_t* eax

if (arg2 != 0)
    if (arg2 u> 0x7ffffff)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 << 5)
    ebp = eax
    
    if (ebp == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_5520b0(eax, arg1[1], *arg1, ebp)
int32_t ecx_1 = arg1[1]
void* i = *arg1
void* edi_1 = ecx_1 - i

if (i != 0)
    for (; i != ecx_1; i += 0x20)
        *(i + 8) = &sealengine::CFrameAddColor::`vftable'
    
    i = j__free(*arg1)

*arg1 = ebp
arg1[1] = (edi_1 & 0xffffffe0) + ebp
arg1[2] = &ebp[arg2 * 8]
return i
