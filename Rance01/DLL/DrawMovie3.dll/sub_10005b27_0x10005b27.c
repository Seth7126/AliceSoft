// 函数: sub_10005b27
// 地址: 0x10005b27
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_1c = edi

if (data_1002364c == 0)
    ___initmbctable()

data_100221cc = 0
void* ecx = GetModuleFileNameA(nullptr, &data_100220c8, 0x104)
char* eax = data_10023658
data_100220b0 = &data_100220c8
char* var_8_1

if (eax != 0)
    var_8_1 = eax

if (eax == 0 || *eax == 0)
    var_8_1 = &data_100220c8

int32_t var_c
int32_t* var_20 = &var_c
int32_t var_10
sub_1000598d(&var_c, var_8_1, &var_10, ecx, nullptr, nullptr)
int32_t eax_2 = var_c

if (eax_2 u< 0x3fffffff)
    int32_t ecx_1 = var_10
    
    if (ecx_1 u< 0xffffffff)
        int32_t edi_3 = eax_2 << 2
        uint32_t eax_3 = edi_3 + ecx_1
        
        if (eax_3 u>= ecx_1)
            void* eax_4 = sub_10004125(eax_3)
            
            if (eax_4 != 0)
                int32_t* var_20_2 = &var_c
                sub_1000598d(&var_c, var_8_1, &var_10, eax_3, eax_4, edi_3 + eax_4)
                data_10022094 = var_c - 1
                data_10022098 = eax_4
                return 0

return 0xffffffff
