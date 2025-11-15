// 函数: sub_6b8650
// 地址: 0x6b8650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* edi = arg1
int32_t* var_4 = edi
void* i_2 = sub_6b2ec0(arg2, 0x20)

if (i_2 s>= 0 && i_2 s<= arg2[4] - 8)
    int32_t var_18_1 = 1
    void* var_1c_1 = i_2 + 1
    char* edi_1 = _calloc()
    var_4[3] = edi_1
    
    if (i_2 != 0)
        void* i
        
        do
            *edi_1 = sub_6b2ec0(arg2, 8)
            edi_1 = &edi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    void* eax_5 = sub_6b2ec0(arg2, 0x20)
    edi = var_4
    
    if (eax_5 s>= 0)
        int32_t eax_8
        int32_t edx
        edx:eax_8 = sx.q(arg2[1] + 7)
        
        if (eax_5 s<= (arg2[4] - ((eax_8 + (edx & 7)) s>> 3) - *arg2) s>> 2)
            edi[2] = eax_5
            int32_t var_18_2 = 4
            void* var_1c_2 = eax_5 + 1
            *edi = _calloc()
            int32_t var_20_1 = 4
            int32_t var_24_1 = edi[2] + 1
            int32_t i_1 = 0
            edi[1] = _calloc()
            
            if (edi[2] s> 0)
                do
                    void* j_1 = sub_6b2ec0(arg2, 0x20)
                    
                    if (j_1 s< 0)
                        goto label_6b87ab
                    
                    int32_t eax_19
                    int32_t edx_2
                    edx_2:eax_19 = sx.q(arg2[1] + 7)
                    
                    if (j_1 s> arg2[4] - ((eax_19 + (edx_2 & 7)) s>> 3) - *arg2)
                        goto label_6b87ab
                    
                    int32_t var_18_3 = 1
                    *(edi[1] + (i_1 << 2)) = j_1
                    void* var_1c_3 = j_1 + 1
                    *(*edi + (i_1 << 2)) = _calloc()
                    char* edi_2 = *(*edi + (i_1 << 2))
                    
                    if (j_1 != 0)
                        void* j
                        
                        do
                            *edi_2 = sub_6b2ec0(arg2, 8)
                            edi_2 = &edi_2[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    edi = var_4
                    i_1 += 1
                while (i_1 s< edi[2])
            
            if (sub_6b2ec0(arg2, 1) == 1)
                return 0

label_6b87ab:
sub_6b82c0(edi)
return 0xffffff7b
