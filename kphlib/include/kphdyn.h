/*
 * Copyright (c) 2022 Winsider Seminars & Solutions, Inc.  All rights reserved.
 *
 * This file is part of System Informer.
 *
 * THIS IS AN AUTOGENERATED FILE, DO NOT MODIFY
 *
 */

#pragma once

#define KPH_DYN_CONFIGURATION_VERSION 5

#define KPH_DYN_CI_INVALID ((SHORT)-1)
#define KPH_DYN_CI_V1      ((SHORT)1)
#define KPH_DYN_CI_V2      ((SHORT)2)

#include <pshpack1.h>

typedef struct _KPH_DYN_CONFIGURATION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT ServicePackMajor;             // -1 to ignore
    USHORT BuildNumberMin;               // -1 to ignore
    USHORT RevisionMin;                  // -1 to ignore
    USHORT BuildNumberMax;               // -1 to ignore
    USHORT RevisionMax;                  // -1 to ignore

    USHORT EgeGuid;                      // dt nt!_ETW_GUID_ENTRY Guid
    USHORT EpObjectTable;                // dt nt!_EPROCESS ObjectTable
    USHORT EreGuidEntry;                 // dt nt!_ETW_REG_ENTRY GuidEntry
    USHORT HtHandleContentionEvent;      // dt nt!_HANDLE_TABLE HandleContentionEvent
    USHORT OtName;                       // dt nt!_OBJECT_TYPE Name
    USHORT OtIndex;                      // dt nt!_OBJECT_TYPE Index
    USHORT ObDecodeShift;                // dt nt!_HANDLE_TABLE_ENTRY ObjectPointerBits
    USHORT ObAttributesShift;            // dt nt!_HANDLE_TABLE_ENTRY Attributes
    USHORT CiVersion;                    // ci.dll exports version
    USHORT AlpcCommunicationInfo;        // dt nt!_ALPC_PORT CommunicationInfo
    USHORT AlpcOwnerProcess;             // dt nt!_ALPC_PORT OwnerProcess
    USHORT AlpcConnectionPort;           // dt nt!_ALPC_COMMUNICATION_INFO ConnectionPort
    USHORT AlpcServerCommunicationPort;  // dt nt!_ALPC_COMMUNICATION_INFO ServerCommunicationPort
    USHORT AlpcClientCommunicationPort;  // dt nt!_ALPC_COMMUNICATION_INFO ClientCommunicationPort
    USHORT AlpcHandleTable;              // dt nt!_ALPC_COMMUNICATION_INFO HandleTable
    USHORT AlpcHandleTableLock;          // dt nt!_ALPC_HANDLE_TABLE Lock
    USHORT AlpcAttributes;               // dt nt!_ALPC_PORT PortAttributes
    USHORT AlpcAttributesFlags;          // dt nt!_ALPC_PORT_ATTRIBUTES Flags
    USHORT AlpcPortContext;              // dt nt!_ALPC_PORT PortContext
    USHORT AlpcSequenceNo;               // dt nt!_ALPC_PORT SequenceNo
    USHORT AlpcState;                    // dt nt!_ALPC_PORT State

} KPH_DYN_CONFIGURATION, *PKPH_DYN_CONFIGURATION;

typedef struct _KPH_DYNDATA
{
    ULONG Version;
    ULONG Count;
    KPH_DYN_CONFIGURATION Configs[ANYSIZE_ARRAY];

} KPH_DYNDATA, *PKPH_DYNDATA;

#include <poppack.h>

extern BYTE KphDynData[];
extern ULONG KphDynDataLength;
extern BYTE KphDynDataSig[];
extern ULONG KphDynDataSigLength;
