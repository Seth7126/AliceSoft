// 函数: sub_5f6a30
// 地址: 0x5f6a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = (*(*arg3 + 8))()
(*(*arg3 + 0x44))(arg2)
void* edi_1 = arg2 - ebp

if (ebp s< 0)
    edi_1 = arg2
    ebp = 0

char* result = (*(*arg3 + 8))()

if (edi_1 + ebp s> result)
    result = (*(*arg3 + 8))()
    edi_1 = result - ebp

int32_t esi_1 = 0

if (edi_1 s> 0)
    do
        result = sub_5f6460(result, esi_1 + ebp, arg3, arg4)
        esi_1 += 1
    while (esi_1 s< edi_1)

return result
