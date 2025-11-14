// 函数: sub_4410f0
// 地址: 0x4410f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2
arg2 = (*(ebp + 4) - *ebp) s>> 2
int32_t result
int32_t ecx_1
result, ecx_1 = sub_4158d0(arg1, &arg2)

for (int32_t* i = *ebp; i != *(ebp + 4); i = &i[1])
    result = arg1[1]
    int32_t ecx_3
    
    if (i u< result)
        ecx_3 = *arg1
    
    int32_t* ecx_6
    
    if (i u>= result || ecx_3 u> i)
        if (result == arg1[2])
            result = sub_415950(arg1, 1)
        
        ecx_6 = arg1[1]
        
        if (ecx_6 != 0)
            result = *i
            *ecx_6 = result
    else
        if (result == arg1[2])
            result = sub_415950(arg1, 1)
        
        ecx_6 = arg1[1]
        
        if (ecx_6 != 0)
            result = *(*arg1 + ((i - ecx_3) s>> 2 << 2))
            *ecx_6 = result
    arg1[1] += 4

return result
