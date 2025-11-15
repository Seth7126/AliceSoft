// 函数: sub_53fda0
// 地址: 0x53fda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIRadioButtonBoxView::VTable
    ** eax = sub_4f4ba0(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    eax.b = 0
    return eax

int32_t eax_1 = eax[0x12]
int32_t* ecx_3 = eax[0x11]
bool cond:0 = ecx_3 != eax_1

if (ecx_3 != eax_1)
    while (*ecx_3 != arg2)
        ecx_3 = &ecx_3[1]
        
        if (ecx_3 == eax_1)
            break
    
    cond:0 = ecx_3 != eax_1

eax_1.b = cond:0
return eax_1
