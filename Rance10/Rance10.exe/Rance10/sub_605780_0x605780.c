// 函数: sub_605780
// 地址: 0x605780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ebx = arg2
int32_t* edx = ebx[5]

if (ebx[3] s< &edx[1])
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_1

if (ebx[3] != 0)
    eax_1 = ebx[2]
else
    eax_1 = 0

int32_t eax_2 = *(edx + eax_1)
ebx[5] = &edx[1]

if (eax_2 s<= 0)
    eax_2.b = 1
    return eax_2

sub_606040(arg1 + 0x40, eax_2)
int32_t* edi = *(arg1 + 0x40)
void* eax_3 = *(arg1 + 0x44)
arg2 = edi
void* var_4 = eax_3

if (edi != eax_3)
    do
        eax_3 = sub_622cd0(ebx, edi)
        void** ecx_3
        
        if (eax_3.b != 0)
            ecx_3 = ebx[5]
        
        if (eax_3.b == 0 || ebx[3] s< &ecx_3[1])
        label_605876:
            eax_3.b = 0
            return eax_3
        
        int32_t eax_4
        
        if (ebx[3] != 0)
            eax_4 = ebx[2]
        else
            eax_4 = 0
        
        eax_3 = *(ecx_3 + eax_4)
        ebx[5] = &ecx_3[1]
        
        if (eax_3 s> 0)
            sub_6062c0(&edi[6], eax_3)
            int32_t* i = edi[6]
            
            for (int32_t edi_1 = edi[7]; i != edi_1; i = &i[7])
                int32_t* ecx_5 = ebx[5]
                
                if (ebx[3] s< &ecx_5[1])
                    goto label_605876
                
                int32_t eax_5
                
                if (ebx[3] != 0)
                    eax_5 = ebx[2]
                else
                    eax_5 = 0
                
                int32_t eax_6 = *(ecx_5 + eax_5)
                ebx[5] = &ecx_5[1]
                *i = eax_6
                
                if (sub_622cd0(ebx, &i[1]).b == 0)
                    goto label_605876
            
            edi = arg2
        
        edi = &edi[9]
        arg2 = edi
    while (edi != var_4)

eax_3.b = 1
return eax_3
