// 函数: sub_47dc80
// 地址: 0x47dc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_1 = *(arg1 + 8)
int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp_1 = &var_c
int32_t* esi_1 = *(eax_1 + 8)
int32_t edi_1 = 0
int32_t* result = *(eax_1 + 0xc)
uint32_t ebx_4 = (result - esi_1 + 3) u>> 2

if (esi_1 u> result)
    ebx_4 = 0

if (ebx_4 != 0)
    do
        result = *(*esi_1 + 4)
        
        if (result != 0)
            bool cond:0_1 = esp_1[4].b == 0
            int32_t ecx = *result
            *(esp_1 - 4) = result
            esp_1 -= 4
            
            if (cond:0_1)
                result = (*(ecx + 0x20))()
            else
                result = (*(ecx + 0x1c))()
        
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_4)

*esp_1
esp_1[1]
esp_1[2]
return result
