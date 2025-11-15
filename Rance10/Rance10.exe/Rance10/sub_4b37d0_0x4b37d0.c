// 函数: sub_4b37d0
// 地址: 0x4b37d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4ee010(*(arg1 + 0x158))
void* const eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = *(eax + 0x244)

void* esi = *(eax_1 + 0x25c)
int32_t esi_1

if (esi == 0)
    esi_1 = 0
else
    esi_1 = *(esi + 0x40)

int32_t var_c = esi_1
void* result = sub_4f15e0(*(arg1 + 0x15c))

if (result != 0)
    int32_t edx_1 = *(result + 8)
    
    if (esi_1 s>= edx_1 && *(result + 4) + edx_1 s> esi_1)
        void* const i = *(*(result + 0xc) + ((esi_1 - edx_1) << 2))
        
        if (i != 0)
            int32_t edi_1 = *(*(arg1 + 0x158) + 0x40)
            
            do
                if (*(i + 0x40) == edi_1)
                    result.b = 1
                    return result
                
                int32_t esi_3 = *(*(*(i + 0x68) + 0x70) + 0xbc)
                
                if (esi_3 s<= 0)
                    break
                
                int32_t var_c_1 = esi_3
                void* ecx_5 = sub_4f15e0(*(i + 0x6c))
                int32_t edx_2
                
                if (ecx_5 != 0)
                    edx_2 = *(ecx_5 + 8)
                
                if (ecx_5 == 0 || esi_3 s< edx_2 || *(ecx_5 + 4) + edx_2 s<= esi_3)
                    i = nullptr
                else
                    i = *(*(ecx_5 + 0xc) + ((esi_3 - edx_2) << 2))
            while (i != 0)

result.b = 0
return result
