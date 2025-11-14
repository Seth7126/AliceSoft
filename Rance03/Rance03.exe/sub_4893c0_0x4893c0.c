// 函数: sub_4893c0
// 地址: 0x4893c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* edi = arg1
void* result

for (int32_t* i = *(edi + 0x1c); i != *(edi + 0x20); i = &i[1])
    int32_t ecx = *i
    int32_t var_18_1 = *(ecx + 0x30)
    result = sub_48f300(ecx)
    
    if (result != 0 && *(result + 4) != 0)
        result, edi = sub_508720(result, arg2, arg3, 1)
        
        if (result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
