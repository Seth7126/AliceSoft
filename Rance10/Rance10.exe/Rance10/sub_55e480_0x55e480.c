// 函数: sub_55e480
// 地址: 0x55e480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
void** edx = arg2
int32_t edi = edx[4]

if (edi u< 3)
    sub_403360(arg1, 0x75d465)
    return arg1

int32_t esi = edx[5]
char* eax_1

if (esi u< 0x10)
    eax_1 = edx
else
    eax_1 = *edx

if (*eax_1 == 0x24)
    void** eax_2
    
    if (esi u< 0x10)
        eax_2 = edx
    else
        eax_2 = *edx
    
    if (*(eax_2 + 1) == 0x7b)
        void** eax_3
        
        if (esi u< 0x10)
            eax_3 = edx
        else
            eax_3 = *edx
        
        if (*(eax_3 + edi - 1) != 0x7d)
            sub_403360(arg1, 0x75d467)
            return arg1
        
        void** ecx_5
        
        if (esi u< 0x10)
            ecx_5 = edx
        else
            ecx_5 = *edx
        
        void* ecx_6 = ecx_5 + 2
        
        while (true)
            void** eax_5
            
            if (esi u< 0x10)
                eax_5 = edx
            else
                eax_5 = *edx
            
            if (ecx_6 == eax_5 + edi)
                break
            
            void* eax_6
            eax_6.b = *ecx_6
            
            if (eax_6.b == 0x7d)
                break
            
            if (eax_6.b == 0x20)
                break
            
            ecx_6 += 1
        
        if (esi u>= 0x10)
            edx = *edx
        
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        
        if (edx + 2 != ecx_6)
            sub_403490(arg1, edx + 2, ecx_6 - (edx + 2))
        
        return arg1

sub_403360(arg1, 0x75d466)
return arg1
