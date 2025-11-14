// 函数: sub_5ff620
// 地址: 0x5ff620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_c = ecx

if (arg1 u> 6)
    int32_t eax
    eax.b = 0
    return eax

switch (arg1)
    case 0
        *arg3 = zx.d(sub_5ff930())
        int32_t* eax_2
        eax_2.b = 1
        return eax_2
    case 1
        BOOL* esi = *(*(data_75d528 + 0x40) + 0x14)
        
        if (*esi == 0)
            goto label_5ff70a
        
        BOOL hWnd = *esi
        
        if (hWnd == 0)
            goto label_5ff70a
        
        if (DestroyWindow(hWnd) == 0)
            goto label_5ff697
        
        *esi = 0
        *arg3 = 1
        int32_t* eax_5
        eax_5.b = 1
        return eax_5
    case 2
        int32_t ecx_2
        ecx_2.b = **(*(data_75d528 + 0x40) + 0x14) != 0
        *arg3 = ecx_2
        int32_t* eax_10
        eax_10.b = 1
        return eax_10
    case 3
        sub_601790(*arg2)
        int32_t* eax_11
        eax_11.b = 1
        return eax_11
    case 4
        *arg3 = zx.d(sub_601840(*arg2))
        int32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 5
        void* esi_1 = data_75d528
        
        if (sub_600050(esi_1 + 0x14).b == 0)
        label_5ff697:
            *arg3 = 0
            int32_t* eax_6
            eax_6.b = 1
            return eax_6
        
        sub_600710(*(esi_1 + 0x40))
    label_5ff70a:
        *arg3 = 1
        int32_t* eax_14
        eax_14.b = 1
        return eax_14
    case 6
        sub_601920(*arg2)
        char* eax_15
        eax_15.b = 1
        return eax_15
