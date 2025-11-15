// 函数: sub_5c2180
// 地址: 0x5c2180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = arg1
int32_t* result = *arg1
int32_t* i = *result
i_1 = i

if (i != result)
    int32_t arg_4
    int32_t esi_1 = arg_4
    
    do
        void* ecx = i[5]
        
        if (ecx == esi_1)
            sub_5bdbb0(arg1, &arg_4, i)
            return 1
        
        if (sub_5c1170(ecx, esi_1) != 0)
            return 1
        
        sub_429080(&i_1)
        i = i_1
    while (i != *arg1)

result.b = 0
return result
