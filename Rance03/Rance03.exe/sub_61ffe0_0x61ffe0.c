// 函数: sub_61ffe0
// 地址: 0x61ffe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_40
HRESULT var_4 = __security_cookie ^ &var_40
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0xc) = 0

if (arg2 != 0)
    if (CoCreateInstance(&data_6d9ed8, 0, CLSCTX_INPROC_SERVER, &data_6d9ec8, arg1 + 0xc) s>= 0)
        int32_t* eax_4 = *(arg1 + 0xc)
        
        if ((*(*eax_4 + 0x28))(eax_4, 0) s>= 0)
            int32_t* eax_5 = *(arg1 + 0xc)
            (*(*eax_5 + 0x18))(eax_5, arg2, 2)
            int32_t* eax_6 = *(arg1 + 0xc)
            int128_t var_3c
            __builtin_memset(&var_3c, 0, 0x24)
            var_3c.d = 0x24
            var_3c:4.d = 9
            var_3c:8.d = 0
            int128_t var_2c
            __builtin_memset(&var_2c, 0, 0x14)
            var_40 = nullptr
            
            if ((*(*eax_6 + 0xc))(eax_6, &var_3c, &var_40, 0) s< 0)
                sub_455870("DirectSound")
            
            int32_t* ecx_7 = var_40
            int128_t var_18 = zx.o(0)
            var_18:0xe.d = 0x10
            var_18.d = 0x20001
            var_18:4.d = 0xac44
            var_18:0xc.w = 4
            var_18:8.d = 0x2b110
            
            if (ecx_7 != 0)
                (*(*ecx_7 + 0x38))(ecx_7, &var_18)
                int32_t* eax_10 = var_40
                (*(*eax_10 + 8))(eax_10)
            
            int32_t eax_8
            eax_8.b = 1
            sub_69a5bc(var_4 ^ &var_40)
            return eax_8
        
        if (*(arg1 + 8) == 0)
            sub_64b530("DirectSound")
            *(arg1 + 8) = 1
    else if (*(arg1 + 8) == 0)
        sub_64b530("DirectSound")
        *(arg1 + 8) = 1
    
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        *(arg1 + 0xc) = 0

HRESULT eax_1
eax_1.b = 0
sub_69a5bc(var_4 ^ &var_40)
return eax_1
