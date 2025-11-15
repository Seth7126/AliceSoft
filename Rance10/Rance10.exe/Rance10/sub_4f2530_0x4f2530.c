// 函数: sub_4f2530
// 地址: 0x4f2530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* edx = *(arg1 + 0xc)
void* result = *(edx + 0xc4)
int32_t* edx_1 = *(edx + 0xc0)

if (edx_1 != result)
    while (*edx_1 != arg2)
        edx_1 = &edx_1[1]
        
        if (edx_1 == result)
            break
    
    if (edx_1 != result)
        void* ecx = *(arg1 + 4)
        
        if (*(ecx + 0x244) == 0)
            result = sub_4ee010(ecx)
            
            if (result != 0)
                *(arg1 + 8)
                struct 
                    common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable*
                    * eax = sub_4f1840(arg2)
                void* var_14_2 = eax[0x10]
                eax[0x50] = *(result + 0x40)
                sub_504200(result + 0x84, var_14_2)
                return sub_504260(*(arg1 + 0xc), arg2)

return result
