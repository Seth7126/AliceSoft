// 函数: sub_4f6a20
// 地址: 0x4f6a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1
void* edi = data_7fcba4
arg1 = ebx
int32_t* result = *(edi + 0x1d0)

if (ebx s>= result && *(edi + 0x1d4) s> result)
    int32_t ecx
    int32_t var_c_1 = ecx
    result = sub_404790(&arg1, *(edi + 0x1e0), *(edi + 0x1dc), &arg1)
    
    if (result != *(edi + 0x1e0) && *result == ebx)
        result = sub_6feca0(result, &result[1], *(edi + 0x1e0) - &result[1])
        *(edi + 0x1e0) -= 4

return result
