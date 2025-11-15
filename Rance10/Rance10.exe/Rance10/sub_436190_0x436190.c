// 函数: sub_436190
// 地址: 0x436190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = nullptr
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t i = 0
int32_t i_1 = 0

do
    if (*(arg1 + i * 0x30 + 0x471) == 0)
        int32_t** esi_1 = *(arg1 + 0x9e4)
        void* var_c = arg1
        int32_t* var_8_1 = &i_1
        int32_t* var_10
        
        if (*sub_436470(&i_1, &var_c, &var_10, *esi_1, esi_1) == esi_1)
            result = arg1 + 0x444 + i * 0x30
            break
    
    i += 1
    i_1 = i
while (i s< 0x1e)

LeaveCriticalSection(*(arg1 + 0x18) + 4)

if (result != 0)
    int32_t edx_4 = (*(arg1 + 0x38) + 0xf) & 0xfffffff0
    int32_t ecx_3 = (*(arg1 + 0x34) + 0xf) & 0xfffffff0
    *(result + 4) = edx_4
    int32_t edx_5 = edx_4 * ecx_3
    *result = ecx_3
    *(result + 0xc) = *(result + 8)
    uint32_t esi_3 = edx_5 u>> 2
    sub_437bc0(result + 8, edx_5)
    *(result + 0x18) = *(result + 0x14)
    sub_437bc0(result + 0x14, esi_3)
    *(result + 0x24) = *(result + 0x20)
    sub_437bc0(result + 0x20, esi_3)
    *(result + 0x2c) = 0

return result
