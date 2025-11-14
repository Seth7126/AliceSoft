// 函数: sub_609950
// 地址: 0x609950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
void* var_8 = ebx

if (*(ebx + 0x14) == 0)
    return 

int32_t* eax = *(ebx + 0x10)
void* ebp = ebx + 0x10
int32_t* i = *eax

if (i != eax)
    do
        (**i[4])()
        
        if ((*(*i[4] + 4))() == 1)
            int32_t* ecx_2 = *(ebx + 4)
            int32_t* j = *ecx_2
            
            while (j != ecx_2)
                if (j[5] == i[4])
                    (*(*j[4] + 4))()
                    (*(*j[5] + 4))()
                    void var_4
                    sub_420180(ebx + 4, &var_4, j)
                    break
                
                if (*(j + 0xd) == 0)
                    int32_t* j_1 = j[2]
                    
                    if (*(j_1 + 0xd) != 0)
                        int32_t* j_3 = j[1]
                        
                        if (*(j_3 + 0xd) == 0)
                            while (j == j_3[2])
                                j = j_3
                                j_3 = j_3[1]
                                
                                if (*(j_3 + 0xd) != 0)
                                    break
                        
                        j = j_3
                    else
                        j = j_1
                        int32_t* j_2 = *j
                        
                        while (*(j_2 + 0xd) == 0)
                            j = j_2
                            j_2 = *j
            
            ebx = var_8
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *ebp)

return sub_41fff0(ebp) __tailcall
