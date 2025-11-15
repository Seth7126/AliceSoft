// 函数: sub_4affd0
// 地址: 0x4affd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *arg1
int32_t edx = arg1[1]

if (ecx == edx)
    return 

void* i = arg2

while (true)
    int32_t eax_1 = ecx[1]
    int32_t* esi_1 = *ecx
    
    if (eax_1 != esi_1)
        while (*esi_1 != i)
            esi_1 = &esi_1[1]
            
            if (esi_1 == eax_1)
                break
        
        if (eax_1 != esi_1)
            break
    
    ecx = &ecx[3]
    
    if (ecx == edx)
        return 

int32_t* edx_1 = *ecx
arg2 = arg3
void** eax = ecx[1]

if (edx_1 == eax)
    return 

while (*edx_1 != i)
    edx_1 = &edx_1[1]
    
    if (edx_1 == eax)
        break

if (edx_1 != eax)
    int32_t* var_c_1 = &arg2
    sub_404420(ecx, &arg3, edx_1, ecx)
