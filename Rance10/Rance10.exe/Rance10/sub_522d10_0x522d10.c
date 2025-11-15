// 函数: sub_522d10
// 地址: 0x522d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x198)
int32_t edx = *(arg1 + 0x194)

if (eax s< edx)
    int32_t eax_1 = *(arg1 + 0x19c)
    *(arg1 + 0x194) = 0
    *(arg1 + 0x198) = eax_1

int32_t* nVirtKey_2
int32_t* nVirtKey_3 = nVirtKey_2
void* var_18 = arg1 + 4
void* eax_3 = arg1 + 0x54
int32_t* edi = arg4
void* var_14 = eax_3
int32_t i_1 = 0x50
int32_t i

do
    int32_t* nVirtKey = *eax_3
    void* esi_1 = data_7fcb64
    int32_t* nVirtKey_1 = nVirtKey
    nVirtKey_2 = nVirtKey
    
    if (sub_47d5a0(esi_1).b != 0)
        if ((***(esi_1 + 0x1c))().b == 0)
            nVirtKey.b = 0
        else if (nVirtKey - 0x79 u> 0xe)
            nVirtKey.w = GetKeyState(nVirtKey).w
            nVirtKey.w u>>= 0xf
            nVirtKey.b &= 1
        else
            nVirtKey.b = 0
    else
        nVirtKey.b = 0
    
    void* eax_4
    eax_4.b = *var_18
    char ecx_1
    
    if (eax_4.b != 0 || nVirtKey.b == 0)
        ecx_1 = 0
    else
        ecx_1 = 1
    
    arg4.b = ecx_1
    
    if (eax_4.b == 0 || nVirtKey.b != 0)
        eax_4.b = 0
    else
        eax_4.b = 1
    
    *var_18 = nVirtKey.b
    int32_t* nVirtKey_4
    
    if (ecx_1 != 0)
        int32_t* edx_2 = arg2
        int32_t eax_7 = edx_2[1]
        int32_t ecx_3
        
        if (&nVirtKey_2 u< eax_7)
            ecx_3 = *edx_2
        
        if (&nVirtKey_2 u>= eax_7 || ecx_3 u> &nVirtKey_2)
            if (eax_7 == edx_2[2])
                sub_404610(edx_2, 1)
                edx_2 = arg2
            
            int32_t** eax_13 = edx_2[1]
            
            if (eax_13 != 0)
                *eax_13 = nVirtKey_1
        else
            if (eax_7 == edx_2[2])
                sub_404610(edx_2, 1)
                edx_2 = arg2
            
            int32_t* ecx_5 = edx_2[1]
            
            if (ecx_5 != 0)
                *ecx_5 = *(*edx_2 + ((&nVirtKey_2 - ecx_3) s>> 2 << 2))
        
        edx_2[1] += 4
        nVirtKey_4 = nVirtKey_1
    else if (eax_4.b == 0)
        nVirtKey_4 = nVirtKey_1
    else
        sub_404370(arg3, &nVirtKey_2)
        nVirtKey_4 = nVirtKey_2
        nVirtKey_1 = nVirtKey_4
    
    if (nVirtKey.b != 0)
        int32_t eax_10 = nVirtKey_3[1]
        int32_t ecx_6
        
        if (&nVirtKey_2 u< eax_10)
            ecx_6 = *nVirtKey_3
        
        if (&nVirtKey_2 u>= eax_10 || ecx_6 u> &nVirtKey_2)
            if (eax_10 == nVirtKey_3[2])
                sub_404610(nVirtKey_3, 1)
            
            int32_t** eax_14 = nVirtKey_3[1]
            
            if (eax_14 != 0)
                *eax_14 = nVirtKey_4
        else
            if (eax_10 == nVirtKey_3[2])
                sub_404610(nVirtKey_3, 1)
            
            int32_t* ecx_8 = nVirtKey_3[1]
            
            if (ecx_8 != 0)
                *ecx_8 = *(*nVirtKey_3 + ((&nVirtKey_2 - ecx_6) s>> 2 << 2))
        
        nVirtKey_3[1] += 4
        
        if (eax s< edx || arg4.b != 0)
            int32_t eax_16 = edi[1]
            int32_t ecx_13
            
            if (&nVirtKey_2 u< eax_16)
                ecx_13 = *edi
            
            if (&nVirtKey_2 u>= eax_16 || ecx_13 u> &nVirtKey_2)
                if (eax_16 == edi[2])
                    sub_404610(edi, 1)
                
                int32_t** eax_19 = edi[1]
                
                if (eax_19 != 0)
                    *eax_19 = nVirtKey_1
            else
                if (eax_16 == edi[2])
                    sub_404610(edi, 1)
                
                int32_t* ecx_15 = edi[1]
                
                if (ecx_15 != 0)
                    *ecx_15 = *(*edi + ((&nVirtKey_2 - ecx_13) s>> 2 << 2))
            
            edi[1] += 4
    
    var_18 += 1
    eax_3 = var_14 + 4
    i = i_1
    i_1 -= 1
    var_14 = eax_3
while (i != 1)
int32_t result

if (*nVirtKey_3 != nVirtKey_3[1])
    result = *arg2

if (*nVirtKey_3 == nVirtKey_3[1] || result != arg2[1])
    result = *(arg1 + 0x1a0)
    *(arg1 + 0x194) = 0
    *(arg1 + 0x198) = result

return result
