/****************************************************************************** **																			 ** ** 	Module:		TtTextureStore.c										 ** ** 																		 ** ** 	Purpose: 	Empty rasterizer drawing engine.						 ** ** 				Methods for texture New, Detach and Delete.				 ** ** 																		 ** ** 	Author:		Mike W. Kelley											 ** ** 																		 ** **					2/3/95	Revised for 0.9 SDK release						 ** ** 																		 ** ** 	Copyright (C) 1994-95 Apple Computer, Inc.  All rights reserved.	 ** ** 	Apple Computer Confidential											 ** ** 																		 ** *****************************************************************************//* System */#include <stdlib.h>#include <math.h>#include "RAVE.h"#include "RAVE_system.h"#include "TtTinselTown.h"/************************************************************************************** * Allocate a texture. *************************************************************************************/TQAError TtTextureNew (	unsigned long		flags,				/* Mask of kQATexture_xxx flags */	TQAImagePixelType	pixelType,			/* Depth, color space, etc. */	const TQAImage		images[],			/* Image(s) for texture */	TQATexture			**newTexture)		/* (Out) Newly created TQATexture, or NULL on error */ {	/*	 * Allocate new texture memory, and assign new texture pointer to 'newTexture'.	 * For now we assign NULL and return an error (as this function isn't	 * yet implemented).	 */		*newTexture = NULL;	return (kQANotSupported);}/************************************************************************************** * Detach a texture (by copying the image data). *************************************************************************************/TQAError TtTextureDetach (	TQATexture			*texture)			/* Previously allocated by QATextureNew() */{	TTtTexture			*myTexture;		myTexture = (TTtTexture *) texture;		/*	 * Copy the image data. Not implemented, so for now we return an error.	 */		return (kQANotSupported);}/************************************************************************************** * Delete a texture. *************************************************************************************/void TtTextureDelete (	TQATexture			*texture)			/* Previously allocated by QATextureNew() */{	TTtTexture			*myTexture;		myTexture = (TTtTexture *) texture;		/*	 * Delete the texture. Not yet implemented.	 */}