// 函数: sub_632760
// 地址: 0x632760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_10c
int32_t eax_1 = __security_cookie ^ &var_10c
int32_t eax_2 = *(arg3 + 0x298)

if (eax_2 != 0)
    if (eax_2 == 1)
        int32_t eax_3 = sub_62fcc0(arg3, arg4)
        sub_69a5bc(eax_1 ^ &var_10c)
        return eax_3
    
    *(arg3 + 0x298) = eax_2 - 1
    
    if (eax_2 == 2)
        sub_62fcc0(arg3, arg4)
        int32_t* eax_5 = sub_62a7c0(arg3, "no space in chunk cache")
        sub_69a5bc(eax_1 ^ &var_10c)
        return eax_5

int32_t eax_6 = *(arg3 + 0x74)

if ((eax_6.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_6.b & 4) != 0)
    eax_6 |= 8
    *(arg3 + 0x74) = eax_6

void* eax_7 = sub_62fe60(eax_6, arg4 + 1, arg3, 1)
void* ebp = eax_7

if (ebp == 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_8 = sub_62a7c0(arg3, "out of memory")
    sub_69a5bc(eax_1 ^ &var_10c)
    return eax_8

sub_62fc80(eax_7, ebp, arg3, arg4)
void* eax_9 = sub_62fcc0(arg3, nullptr)

if (eax_9 == 0)
    char* esi_1 = nullptr
    
    if (arg4 != 0)
        while (*(esi_1 + ebp) != 0)
            esi_1 = &esi_1[1]
            
            if (esi_1 u>= arg4)
                break
    
    char* edx_5
    
    if (arg4 == 0 || esi_1 u> 0x4f || esi_1 u< 1)
        edx_5 = "bad keyword"
    label_63299e:
        
        if ((*(arg3 + 0x78) & 0x100000) == 0)
            sub_62a740(arg3, edx_5)
            noreturn
        
        char var_dc[0xd8]
        sub_62a640(eax_9, &var_dc, arg3, edx_5)
        eax_9 = sub_62a550(arg3, &var_dc)
    else
        eax_9 = &esi_1[5]
        
        if (eax_9 u> arg4)
            edx_5 = "truncated"
            goto label_63299e
        
        eax_9.b = *(esi_1 + ebp + 1)
        
        if (eax_9.b != 0 && (eax_9.b != 1 || *(esi_1 + ebp + 2) != 0))
            edx_5 = "bad compression info"
            goto label_63299e
        
        int32_t ecx_10
        ecx_10.b = eax_9.b != 0
        void* esi_2 = &esi_1[3]
        void* var_fc_1 = esi_2
        
        if (esi_2 u< arg4)
            while (*(esi_2 + ebp) != 0)
                esi_2 += 1
                
                if (esi_2 u>= arg4)
                    break
        
        void* esi_3 = esi_2 + 1
        void* var_104_1 = esi_3
        
        if (esi_3 u< arg4)
            while (*(esi_3 + ebp) != 0)
                esi_3 += 1
                
                if (esi_3 u>= arg4)
                    break
        
        void* edi_1
        
        if (ecx_10 != 0)
            if (esi_3 + 1 u>= arg4)
            label_632992:
                edx_5 = "truncated"
                goto label_63299e
            
            int32_t var_120_1 = ecx_10
            var_10c = 0xffffffff
            eax_9 = sub_6301b0(&var_10c, arg4, arg3, esi_3 + 1, &var_10c)
            
            if (eax_9 == 1)
                ebp = *(arg3 + 0x2b8)
                edi_1 = var_10c
                goto label_63293d
            
            edx_5 = *(arg3 + 0x9c)
            
            if (edx_5 != 0)
                goto label_63299e
            
            edi_1 = var_10c
            goto label_63293d
        
        if (esi_3 + 1 u> arg4)
            goto label_632992
        
        edi_1 = arg4 - (esi_3 + 1)
    label_63293d:
        *(edi_1 + esi_3 + 1 + ebp) = 0
        int32_t ecx_12 = neg.d(ecx_10)
        void* var_f4_1 = ebp
        int32_t var_ec_1 = 0
        int32_t var_e4_1 = var_fc_1 + ebp
        int32_t var_f8 = sbb.d(ecx_12, ecx_12, ecx_10 != 0) + 2
        int32_t var_e0_1 = var_104_1 + ebp
        void* var_f0_1 = esi_3 + 1 + ebp
        int32_t var_120_2 = sbb.d(ecx_12, ecx_12, ecx_10 != 0) + 2
        void* var_e8_1 = edi_1
        eax_9 = sub_634590(&var_f8, arg2, arg3, &var_f8)
        
        if (eax_9 != 0)
            edx_5 = "insufficient memory"
            goto label_63299e

sub_69a5bc(eax_1 ^ &var_10c)
return eax_9
