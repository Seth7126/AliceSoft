// 函数: sub_65e670
// 地址: 0x65e670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg3
char** edi = *result
arg3 = nullptr

if (*(arg1 + 0x11c) s> 0)
    int32_t* ebp_1 = arg2
    void* i
    
    do
        char* j = *edi
        char* edx_1 = *ebp_1
        
        for (void* esi_2 = *(arg1 + 0x5c) + j; j u< esi_2; j = &j[2])
            i.b = *edx_1
            edx_1 = &edx_1[1]
            *j = i.b
            j[1] = i.b
        
        result = sub_700660(edi[1], *edi, *(arg1 + 0x5c))
        i = arg3 + 2
        ebp_1 = &ebp_1[1]
        edi = &edi[2]
        arg3 = i
    while (i s< *(arg1 + 0x11c))

return result
