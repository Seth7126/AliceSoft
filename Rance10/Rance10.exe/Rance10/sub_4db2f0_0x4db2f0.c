// 函数: sub_4db2f0
// 地址: 0x4db2f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x54) = 0
void* result = *(arg1 + 0x24)
int32_t* esi = *(arg1 + 0x20)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = *esi
        void* ecx = *(result + 0x1c)
        *(result + 0x31) = 0
        
        if (ecx != 0 && *(result + 0x28) != 0)
            result = sub_4d8c70(ecx)
        else if (*(result + 0x29) != 0 && *(result + 0x20) != 0)
            result = sub_4db2f0()
        else if (*(result + 0x2a) != 0)
            void* ecx_2 = *(result + 0x24)
            
            if (ecx_2 != 0)
                result = sub_4d4a30(ecx_2)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
