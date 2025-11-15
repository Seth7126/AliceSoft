// 函数: sub_4ad910
// 地址: 0x4ad910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
void* var_4_1 = ecx
int32_t* ebx = arg2
int32_t* edi = arg3
void* var_4 = ecx
*ebx = 0
*edi = 0
int32_t* i = *arg1
int32_t* result = arg1[1]

if (i != result)
    do
        arg3 = nullptr
        arg2 = nullptr
        sub_4ad840(ecx, i, &arg3, &arg2)
        int32_t* ecx_1 = *edi
        result = arg3
        *ebx += result
        
        if (ecx_1 s< arg2)
            ecx_1 = arg2
        
        i = &i[3]
        *edi = ecx_1
        ecx = var_4
    while (i != arg1[1])

return result
