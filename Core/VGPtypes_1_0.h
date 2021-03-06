/******************************************************************************************
 *
 *  File: vgptypes.h
 *    Declaration of VGP file types and subtypes
 *
 *  Author: Richard Durbin (rd109@cam.ac.uk)
 *  Copyright (C) Richard Durbin, Cambridge University, 2019
 *
 * HISTORY:
 * Last edited: Dec 27 09:46 2019 (gene)
 *   * Created: Tue Jun 11 23:23:10 2019 (rd109)
 *
 *****************************************************************************************/


/*** Primary Types and Subtypes ***/

typedef enum
  { SEQ = 1,
    RMP,
    ALN,
    HIT,
    JNS,
    BRK,
    LIS,
    MAX_FILE
  } FileType;

#define MAJOR_NUMBER  1
#define MINOR_NUMBER  0

static char *fileTypeName[] = { NULL, "seq", "rmp", "aln", "hit", "jns", "brk", "lis" };

typedef enum
  { IRP = 1,
    PBR,
    X10,
    CTG,
    KMR,
    RMM,
    RMS,
    RMA,
    SXS,
    RXR,
    SXR,
    MAP,
    S2K,
    K2S,
    LYO,
    SCF,
    MAX_SUB
  } SubType;

static char *subTypeName[] = { NULL, "irp", "pbr", "10x", "ctg", "kmr", "rmm", "rms", "rma",
                                     "sxs", "rxr", "sxr", "map", "s2k", "k2s", "lyo", "scf"
                             };

static FileType subPrimary[] = { 0, SEQ, SEQ, SEQ, SEQ, SEQ, RMP, RMP, RMP,
                                    ALN, ALN, ALN, ALN, HIT, HIT, LIS, LIS } ;

#define MAX_FIELD 6     // may need to increase this if future linetypes have more elements

/**************** end of file ****************/
