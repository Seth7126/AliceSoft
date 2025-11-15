// 函数: sub_50b380
// 地址: 0x50b380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     result = sub_4ef140(*(arg1 + 0xac))

if (result == 0)
    return result

int32_t esi_1 = *(arg1 + 0x128)
int32_t ebx_1 = esi_1

if ((ebx_1.b & 1) != 0)
    ebx_1 += 1

int32_t eax = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t edi_1 = esi_1

if (eax s< esi_1)
    edi_1 = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg1 + 0x13c)))

if (eax_1 s< esi_1)
    esi_1 = eax_1

int32_t eax_2 = esi_1

if (eax_2 s< edi_1)
    eax_2 = edi_1

int32_t var_20_1 = (arg3[2] - arg3[1]) * (ebx_1 + (eax_2 << 1)) * 3 + result[0x46]
sub_4f7c10(&result[0x33])
return sub_4cbd50(arg1 + 0xc, arg3, arg2)
