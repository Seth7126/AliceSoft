// 函数: sub_71adbe
// 地址: 0x71adbe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
char* ecx_1 = arg1
void* edx = &ecx_1[1]
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
int32_t edi
int32_t var_c = edi

if (ecx_1 - edx + 1 u> 0xffffffff - arg3)
    return 0xc

void* ebx_2 = arg3 + 1 + ecx_1 - edx + 1
void* eax_2 = __calloc_base(ebx_2, 1)

if (arg3 == 0)
label_71ae12:
    void* var_18_2 = ecx_1 - edx + 1
    char* var_1c_3 = arg1
    int32_t var_20_2 = ebx_2 - arg3
    void* var_24_2 = eax_2 + arg3
    
    if (sub_717fd4() == 0)
        int32_t result = xfd16de3c::append::operator[]::argument_list<char>::append(arg4, eax_2)
        __free_base(0)
        return result
else
    void* var_18_1 = arg3
    int32_t var_1c_2 = arg2
    void* var_20_1 = ebx_2
    void* var_24_1 = eax_2
    
    if (sub_717fd4() == 0)
        goto label_71ae12

int32_t var_28
__builtin_memset(&var_28, 0, 0x14)
__invoke_watson()
noreturn
