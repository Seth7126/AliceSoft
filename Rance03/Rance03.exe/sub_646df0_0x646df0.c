// 函数: sub_646df0
// 地址: 0x646df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
void* eax = arg1[0x10]
void* ecx = *(eax + 0x68)
int32_t ebp = *(*(eax + 4) + 0x1c)
sub_638300(arg1)
int32_t eax_2 = *arg2
__builtin_memset(&arg1[1], 0, 0x14)
arg1[4] = eax_2
arg1[3] = eax_2
arg1[5] = arg2[1]

if (sub_638110(&arg1[1], 1) != 0)
    return 0xffffff79

void* eax_6 = sub_638110(&arg1[1], *(ecx + 0x2c))

if (eax_6 != 0xffffffff)
    arg1[0xa] = eax_6
    int32_t* eax_7 = *(ebp + (eax_6 << 2) + 0x20)
    
    if (eax_7 != 0)
        int32_t eax_8 = *eax_7
        arg1[7] = eax_8
        
        if (eax_8 == 0)
            arg1[6] = 0
            arg1[8] = 0
        label_646eb2:
            arg1[0xc] = arg2[4]
            arg1[0xd] = arg2[5]
            arg1[0xe] = arg2[6]
            arg1[0xf] = arg2[7]
            arg1[0xb] = arg2[3]
            arg1[9] = 0
            *arg1 = 0
            return 0
        
        arg1[6] = sub_638110(&arg1[1], 1)
        void* eax_10 = sub_638110(&arg1[1], 1)
        arg1[8] = eax_10
        
        if (eax_10 != 0xffffffff)
            goto label_646eb2

return 0xffffff78
