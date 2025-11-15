// 函数: sub_502c20
// 地址: 0x502c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
*(arg1 + 0x199) = 1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x178) - *(arg1 + 0x174))
int32_t edx_3 = edx_2 s>> 2
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3 - 1
int32_t arg_4
int32_t* edx_5 = &arg_4
bool cond:0 = arg_4 s>= eax_3
int32_t var_8 = eax_3

if (cond:0)
    edx_5 = &var_8

int32_t* ecx = &var_4

if (*edx_5 s> 0)
    ecx = edx_5

*(arg1 + 0x40) = *ecx
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     eax_4 = sub_4ef140(*(arg1 + 0xb4))
int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x178) - *(arg1 + 0x174))
int32_t edx_7 = edx_6 s>> 2
int32_t ecx_5 = *(arg1 + 0x40)
int32_t edi_2 = (edx_7 u>> 0x1f) + edx_7
int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 0x118)), *(arg1 + 0x114))
*(arg1 + 0x114)

if (temp0 s< edi_2)
    edi_2 = temp0

void* eax_9 = eax_4[0x46]

if (ecx_5 s>= eax_9)
    int32_t* result = eax_9 + edi_2
    
    if (result s> ecx_5)
        return result
    
    ecx_5 = ecx_5 - edi_2 + 1

int32_t var_18_1 = ecx_5
return sub_4f7c10(&eax_4[0x33])
