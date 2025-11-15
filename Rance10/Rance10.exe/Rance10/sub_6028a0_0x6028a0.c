// 函数: sub_6028a0
// 地址: 0x6028a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2

if (esi u> 0xffffffff)
    sub_6d0927("vector<bool> too long")
    noreturn

char* ecx = arg1[1]
int32_t* result = *arg1
uint32_t ebx_1 = (esi + 0x1f) u>> 5

if (ebx_1 u< (ecx - result) s>> 2)
    result = sub_602a10(arg1, &arg2, &result[ebx_1], ecx)

arg1[3] = esi
int32_t esi_1 = esi & 0x1f

if (esi_1 u> 0)
    void* edx_3 = *arg1 + (ebx_1 << 2)
    result = (1 << esi_1.b) - 1
    *(edx_3 - 4) &= result

return result
