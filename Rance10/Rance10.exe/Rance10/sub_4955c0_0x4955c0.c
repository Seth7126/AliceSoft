// 函数: sub_4955c0
// 地址: 0x4955c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
int32_t* eax = edi[4]
arg1 = eax

if (*arg2 s< eax)
    do
        int32_t edx_1 = edi[5]
        int32_t ecx_1 = *arg2
        char* eax_1
        
        if (edx_1 u< 0x10)
            eax_1 = edi
        else
            eax_1 = *edi
        
        eax_1.b = eax_1[ecx_1]
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u<= 0xf)
                goto label_495609
            
            char* eax_9
            
            if (edx_1 u< 0x10)
                eax_9 = edi
            else
                eax_9 = *edi
            
            if (eax_9[ecx_1] == 0x20)
                break
            
            *arg2 = ecx_1 + 1
            int32_t* eax_11
            
            if (edi[5] u< 0x10)
                eax_11 = edi
            else
                eax_11 = *edi
            
            sub_4263a0(arg3, eax_11 + ecx_1)
        else
        label_495609:
            *arg2 = ecx_1 + 1
            int32_t* eax_3
            
            if (edi[5] u< 0x10)
                eax_3 = edi
            else
                eax_3 = *edi
            
            char* ebx_1 = eax_3 + ecx_1
            void* eax_4 = arg3[1]
            int32_t ecx_2
            
            if (ebx_1 u< eax_4)
                ecx_2 = *arg3
            
            char* ecx_5
            
            if (ebx_1 u>= eax_4 || ecx_2 u> ebx_1)
                if (eax_4 == arg3[2])
                    sub_405a20(arg3, 1)
                
                ecx_5 = arg3[1]
                
                if (ecx_5 != 0)
                    eax_4.b = *ebx_1
                    *ecx_5 = eax_4.b
            else
                if (eax_4 == arg3[2])
                    sub_405a20(arg3, 1)
                
                ecx_5 = arg3[1]
                
                if (ecx_5 != 0)
                    eax_4.b = *(ebx_1 - ecx_2 + *arg3)
                    *ecx_5 = eax_4.b
            arg3[1] += 1
            int32_t ecx_6 = *arg2
            *arg2 = ecx_6 + 1
            int32_t* eax_6
            
            if (edi[5] u< 0x10)
                eax_6 = edi
            else
                eax_6 = *edi
            
            char* ebx_3 = eax_6 + ecx_6
            void* eax_7 = arg3[1]
            int32_t ecx_7
            
            if (ebx_3 u< eax_7)
                ecx_7 = *arg3
            
            if (ebx_3 u>= eax_7 || ecx_7 u> ebx_3)
                if (eax_7 == arg3[2])
                    sub_405a20(arg3, 1)
                
                char* ecx_11 = arg3[1]
                
                if (ecx_11 != 0)
                    eax_7.b = *ebx_3
                    *ecx_11 = eax_7.b
                
                arg3[1] += 1
            else
                if (eax_7 == arg3[2])
                    sub_405a20(arg3, 1)
                
                char* ecx_9 = arg3[1]
                
                if (ecx_9 != 0)
                    int32_t eax_8
                    eax_8.b = *(ebx_3 - ecx_7 + *arg3)
                    *ecx_9 = eax_8.b
                
                arg3[1] += 1
    while (*arg2 s< arg1)

void* eax_14 = arg3[1]
arg1.b = 0
int32_t ecx_13

if (&arg1 u< eax_14)
    ecx_13 = *arg3

if (&arg1 u>= eax_14 || ecx_13 u> &arg1)
    if (eax_14 == arg3[2])
        sub_405a20(arg3, 1)
    
    eax_14 = arg3[1]
    
    if (eax_14 != 0)
        *eax_14 = 0
else
    if (eax_14 == arg3[2])
        sub_405a20(arg3, 1)
    
    char* ecx_15 = arg3[1]
    
    if (ecx_15 != 0)
        int32_t eax_15
        eax_15.b = *(&arg1 - ecx_13 + *arg3)
        *ecx_15 = eax_15.b
        eax_15.b = 1
        arg3[1] += 1
        *arg2 += 1
        return eax_15

arg3[1] += 1
eax_14.b = 1
*arg2 += 1
return eax_14
