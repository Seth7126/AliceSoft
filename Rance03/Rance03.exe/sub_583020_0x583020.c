// 函数: sub_583020
// 地址: 0x583020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c73e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_24 = ebx
int32_t* var_20 = nullptr
int32_t var_1c = 0
var_20 = sub_4a6eb0()
int32_t var_4 = 0
void* i = *(ebx + 0x28)
void* i_1 = i
int32_t* arg_4

while (i != *(ebx + 0x2c))
    int32_t j_1 = 3
    int32_t* var_28_1 = i + 8
    int32_t* edi = i + 8
    int32_t j_2 = 3
    int32_t j
    
    do
        int32_t ebp_1 = *edi * 9
        int32_t ebx_2 = *arg_4
        int32_t k = *(ebx_2 + (ebp_1 << 2) + 0xc)
        
        if (k != *(ebx_2 + (ebp_1 << 2) + 0x10))
            do
                uint32_t var_4c_1 = zx.d(data_75dd2a)
                int32_t k_1 = k
                int32_t** var_18
                j_1 = sub_4ce350(&var_20, &var_18, j_1)
                k += 4
            while (k != *(ebx_2 + (ebp_1 << 2) + 0x10))
            
            j_1 = j_2
        
        edi = &edi[0xf]
        j = j_1
        j_1 -= 1
        j_2 = j_1
    while (j != 1)
    ebx = var_24
    i = i_1 + 0xbc
    i_1 = i

sub_583130(ebx, &var_20)
int32_t** eax_8 = var_20
sub_4200d0(&var_20, &arg_4, *eax_8, eax_8)
int32_t result = j__free(var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return result
