// 函数: sub_4816a0
// 地址: 0x4816a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** i_6 = *arg3
void** i = i_6
void** i_1 = i_6
void** i_7 = i_6[1]
void** i_5 = i_7

if (*(i_5 + 0xd) == 0)
    do
        if (i_5[4] u>= *arg2)
            i = i_5
            i_5 = *i_5
        else
            i_5 = i_5[2]
    while (*(i_5 + 0xd) == 0)
    
    i_1 = i

while (*(i_7 + 0xd) == 0)
    if (*arg2 u>= i_7[4])
        i_7 = i_7[2]
    else
        i_6 = i_7
        i_7 = *i_7

if (i != i_6)
    if (*(arg1 + 8) s> 0)
        while (true)
            if ((*(**(i[5] + 4) + 0x18))() != 0 && (*(**(i[5] + 4) + 0x24))() u< *(arg1 + 8))
                sub_481010(arg1, nullptr)
                goto label_4817b7
            
            if (*(i + 0xd) == 0)
                void** i_2 = i[2]
                
                if (*(i_2 + 0xd) != 0)
                    void** i_4 = i[1]
                    
                    if (*(i_4 + 0xd) == 0)
                        while (i == i_4[2])
                            i = i_4
                            i_4 = i_4[1]
                            
                            if (*(i_4 + 0xd) != 0)
                                break
                    
                    i = i_4
                else
                    i = i_2
                    void** i_3 = *i
                    
                    while (*(i_3 + 0xd) == 0)
                        i = i_3
                        i_3 = *i
            
            if (i == i_6)
                i = i_1
                break
    
    if (*(arg1 + 0xc) == 0)
        sub_481010(arg1, i[5])
        (*(**(i[5] + 4) + 0x14))()
        return i[5]

sub_481010(arg1, nullptr)
int32_t var_24_2 = 0
struct kiwi::CSoundChannel::VTable** result = sub_485990(*(arg1 + 4))

if (result == 0)
label_4817b7:
    return 0

struct kiwi::CSoundChannel::VTable** result_1 = result
i_1 = *arg2
int32_t* eax_13
int32_t ecx_12
eax_13, ecx_12 = sub_435660(&i_1)
int32_t* var_24_4 = eax_13
void* var_28 = &eax_13[4]
sub_481980(arg3, &i_1, ecx_12)
return result
