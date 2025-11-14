// 函数: __setargv
// 地址: 0x6a7ac9
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1
int32_t var_c = arg1

if (data_75df58 == 0)
    ___initmbctable()

data_75d414 = 0
GetModuleFileNameA(nullptr, &data_75d310, 0x104)
char* esi = data_75df48
data_75c930 = &data_75d310

if (esi == 0 || *esi == 0)
    esi = &data_75d310

sub_6a7b7c(esi, nullptr, nullptr, &var_8, &var_c)
int32_t ebx = var_8

if (ebx u< 0x3fffffff)
    int32_t ecx = var_c
    
    if (ecx u< 0xffffffff)
        uint32_t edx_1 = ecx + (ebx << 2)
        
        if (edx_1 u>= ecx)
            int32_t* eax_1 = sub_69e76b(edx_1)
            
            if (eax_1 != 0)
                sub_6a7b7c(esi, eax_1, &eax_1[ebx], &var_8, &var_c)
                int32_t eax_4 = var_8 - 1
                data_75c920 = eax_1
                data_75c91c = eax_4
                return 0

return 0xffffffff
