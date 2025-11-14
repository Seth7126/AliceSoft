// 函数: sub_5c9df0
// 地址: 0x5c9df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg2
void* eax

if (*(ebx + 0xc) != 0)
    eax = *(ebx + 8)
else
    eax = nullptr

arg2 = eax
uint32_t ebx_1

if (*(ebx + 0x48) != 0)
    ebx_1 = *(ebx + 0xc) u>> 2
else
    ebx_1 = 0

int32_t edi = arg3

if (edi s< 0)
    edi = 0

if (edi s< arg4)
    while (edi s< ebx_1)
        int32_t var_4_1 = *(eax + (edi << 2))
        int32_t* var_1c_1 = &arg3
        int32_t* var_8 = arg5
        int32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_5cac70(arg1, arg6, &var_8, arg5)
        
        if (eax_2.b == 0)
            int32_t var_1c_4 = 0x6e8e24
            sub_5c2400(eax_2, edx_1, arg1, arg1, "A_FIND")
            int32_t eax_12
            eax_12.b = 0
            return eax_12
        
        if (arg3 != 0)
            int32_t ecx_2 = arg1[0x8b]
            int32_t ebx_7 = (arg1[0x8d] - arg1[0x8a]) s>> 2
            
            if (ebx_7 + 1 u>= ecx_2)
                sub_64ad90(&arg1[0x89], ecx_2 * 2)
                arg1[0x8d] = arg1[0x8a] + (ebx_7 << 2)
            
            *arg1[0x8d] = edi
            int32_t* eax_11
            eax_11.b = 1
            arg1[0x8d] += 4
            return eax_11
        
        eax = arg2
        edi += 1
        
        if (edi s>= arg4)
            break

int32_t ebx_3 = arg1[0x8b]
int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (edi_3 + 1 u>= ebx_3)
    int32_t eax_4 = arg1[0x8c]
    int32_t ebx_4 = ebx_3 * 2
    
    if (ebx_4 u> eax_4)
        int32_t lpMem = arg1[0x8a]
        int32_t eax_5 = eax_4 + ebx_4
        arg1[0x8c] = eax_5
        int32_t dwBytes = eax_5 << 2
        int32_t eax_6
        
        if (lpMem == 0)
            eax_6 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
        else
            eax_6 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
        
        arg1[0x8a] = eax_6
    
    arg1[0x8b] = ebx_4
    arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)

*arg1[0x8d] = 0xffffffff
int32_t* eax_15
eax_15.b = 1
arg1[0x8d] += 4
return eax_15
